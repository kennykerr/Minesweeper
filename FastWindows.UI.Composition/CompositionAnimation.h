#pragma once
#include "CompositionAnimation.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionAnimation : CompositionAnimationT<CompositionAnimation, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionAnimation() = default;

        void ClearAllParameters();
        void ClearParameter(hstring const& key);
        void SetColorParameter(hstring const& key, Windows::UI::Color const& value);
        void SetMatrix3x2Parameter(hstring const& key, Windows::Foundation::Numerics::float3x2 const& value);
        void SetMatrix4x4Parameter(hstring const& key, Windows::Foundation::Numerics::float4x4 const& value);
        void SetQuaternionParameter(hstring const& key, Windows::Foundation::Numerics::quaternion const& value);
        void SetReferenceParameter(hstring const& key, FastWindows::UI::Composition::CompositionObject const& compositionObject);
        void SetScalarParameter(hstring const& key, float value);
        void SetVector2Parameter(hstring const& key, Windows::Foundation::Numerics::float2 const& value);
        void SetVector3Parameter(hstring const& key, Windows::Foundation::Numerics::float3 const& value);
        void SetVector4Parameter(hstring const& key, Windows::Foundation::Numerics::float4 const& value);
        void SetBooleanParameter(hstring const& key, bool value);
        hstring Target();
        void Target(hstring value);
        FastWindows::UI::Composition::InitialValueExpressionCollection InitialValueExpressions();
        void SetExpressionReferenceParameter(hstring const& parameterName, FastWindows::UI::Composition::IAnimationObject const& source);
    };
}
