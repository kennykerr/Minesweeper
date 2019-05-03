#include "pch.h"
#include "CompositionGraphicsDevice.h"
#include "CompositionGraphicsDevice.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionDrawingSurface CompositionGraphicsDevice::CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CompositionGraphicsDevice::RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<FastWindows::UI::Composition::CompositionGraphicsDevice, FastWindows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void CompositionGraphicsDevice::RenderingDeviceReplaced(winrt::event_token const& token) noexcept
    {
    }
    FastWindows::UI::Composition::CompositionDrawingSurface CompositionGraphicsDevice::CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode)
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::CompositionVirtualDrawingSurface CompositionGraphicsDevice::CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode)
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::CompositionMipmapSurface CompositionGraphicsDevice::CreateMipmapSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode)
    {
        throw hresult_not_implemented();
    }
    void CompositionGraphicsDevice::Trim()
    {
        throw hresult_not_implemented();
    }
}
