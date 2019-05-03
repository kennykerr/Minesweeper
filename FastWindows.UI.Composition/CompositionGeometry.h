#pragma once
#include "CompositionGeometry.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionGeometry : CompositionGeometryT<CompositionGeometry, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionGeometry() = default;

        float TrimEnd();
        void TrimEnd(float value);
        float TrimOffset();
        void TrimOffset(float value);
        float TrimStart();
        void TrimStart(float value);
    };
}
