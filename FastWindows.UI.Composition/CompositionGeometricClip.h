#pragma once
#include "CompositionGeometricClip.g.h"
#include "CompositionClip.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionGeometricClip : CompositionGeometricClipT<CompositionGeometricClip, FastWindows::UI::Composition::implementation::CompositionClip>
    {
        CompositionGeometricClip() = default;

        FastWindows::UI::Composition::CompositionGeometry Geometry();
        void Geometry(FastWindows::UI::Composition::CompositionGeometry value);
        FastWindows::UI::Composition::CompositionViewBox ViewBox();
        void ViewBox(FastWindows::UI::Composition::CompositionViewBox value);
    };
}
