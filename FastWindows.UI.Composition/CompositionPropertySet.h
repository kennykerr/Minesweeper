#pragma once
#include "CompositionPropertySet.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionPropertySet : CompositionPropertySetT<CompositionPropertySet, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionPropertySet() = default;

        void InsertColor(hstring const& propertyName, Windows::UI::Color const& value);
        void InsertMatrix3x2(hstring const& propertyName, Windows::Foundation::Numerics::float3x2 const& value);
        void InsertMatrix4x4(hstring const& propertyName, Windows::Foundation::Numerics::float4x4 const& value);
        void InsertQuaternion(hstring const& propertyName, Windows::Foundation::Numerics::quaternion const& value);
        void InsertScalar(hstring const& propertyName, float value);
        void InsertVector2(hstring const& propertyName, Windows::Foundation::Numerics::float2 const& value);
        void InsertVector3(hstring const& propertyName, Windows::Foundation::Numerics::float3 const& value);
        void InsertVector4(hstring const& propertyName, Windows::Foundation::Numerics::float4 const& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetColor(hstring const& propertyName, Windows::UI::Color& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetMatrix3x2(hstring const& propertyName, Windows::Foundation::Numerics::float3x2& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetMatrix4x4(hstring const& propertyName, Windows::Foundation::Numerics::float4x4& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetQuaternion(hstring const& propertyName, Windows::Foundation::Numerics::quaternion& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetScalar(hstring const& propertyName, float& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetVector2(hstring const& propertyName, Windows::Foundation::Numerics::float2& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetVector3(hstring const& propertyName, Windows::Foundation::Numerics::float3& value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetVector4(hstring const& propertyName, Windows::Foundation::Numerics::float4& value);
        void InsertBoolean(hstring const& propertyName, bool value);
        Windows::UI::Composition::CompositionGetValueStatus TryGetBoolean(hstring const& propertyName, bool& value);
    };
}
