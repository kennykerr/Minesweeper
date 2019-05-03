#pragma once
#include "CompositionDrawingSurface.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionDrawingSurface : CompositionDrawingSurfaceT<CompositionDrawingSurface, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionDrawingSurface() = default;

        Windows::Graphics::DirectX::DirectXAlphaMode AlphaMode();
        Windows::Graphics::DirectX::DirectXPixelFormat PixelFormat();
        Windows::Foundation::Size Size();
        Windows::Graphics::SizeInt32 SizeInt32();
        void Resize(Windows::Graphics::SizeInt32 const& sizePixels);
        void Scroll(Windows::Graphics::PointInt32 const& offset);
        void Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect);
        void ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect);
        void ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect);
    };
}
