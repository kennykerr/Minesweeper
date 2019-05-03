#include "pch.h"
#include "CompositionDrawingSurface.h"
#include "CompositionDrawingSurface.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::Graphics::DirectX::DirectXAlphaMode CompositionDrawingSurface::AlphaMode()
    {
        throw hresult_not_implemented();
    }
    Windows::Graphics::DirectX::DirectXPixelFormat CompositionDrawingSurface::PixelFormat()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::Size CompositionDrawingSurface::Size()
    {
        throw hresult_not_implemented();
    }
    Windows::Graphics::SizeInt32 CompositionDrawingSurface::SizeInt32()
    {
        throw hresult_not_implemented();
    }
    void CompositionDrawingSurface::Resize(Windows::Graphics::SizeInt32 const& sizePixels)
    {
        throw hresult_not_implemented();
    }
    void CompositionDrawingSurface::Scroll(Windows::Graphics::PointInt32 const& offset)
    {
        throw hresult_not_implemented();
    }
    void CompositionDrawingSurface::Scroll(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& scrollRect)
    {
        throw hresult_not_implemented();
    }
    void CompositionDrawingSurface::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect)
    {
        throw hresult_not_implemented();
    }
    void CompositionDrawingSurface::ScrollWithClip(Windows::Graphics::PointInt32 const& offset, Windows::Graphics::RectInt32 const& clipRect, Windows::Graphics::RectInt32 const& scrollRect)
    {
        throw hresult_not_implemented();
    }
}
