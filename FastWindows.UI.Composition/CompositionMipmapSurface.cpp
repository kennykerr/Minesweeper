#include "pch.h"
#include "CompositionMipmapSurface.h"
#include "CompositionMipmapSurface.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    uint32_t CompositionMipmapSurface::LevelCount()
    {
        throw hresult_not_implemented();
    }
    Windows::Graphics::DirectX::DirectXAlphaMode CompositionMipmapSurface::AlphaMode()
    {
        throw hresult_not_implemented();
    }
    Windows::Graphics::DirectX::DirectXPixelFormat CompositionMipmapSurface::PixelFormat()
    {
        throw hresult_not_implemented();
    }
    Windows::Graphics::SizeInt32 CompositionMipmapSurface::SizeInt32()
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::CompositionDrawingSurface CompositionMipmapSurface::GetDrawingSurfaceForLevel(uint32_t level)
    {
        throw hresult_not_implemented();
    }
}
