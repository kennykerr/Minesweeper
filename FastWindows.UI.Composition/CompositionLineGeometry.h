#pragma once
#include "CompositionLineGeometry.g.h"
#include "CompositionGeometry.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionLineGeometry : CompositionLineGeometryT<CompositionLineGeometry, FastWindows::UI::Composition::implementation::CompositionGeometry>
    {
        CompositionLineGeometry() = default;

        Windows::Foundation::Numerics::float2 Start();
        void Start(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 End();
        void End(Windows::Foundation::Numerics::float2 value);
    };
}
