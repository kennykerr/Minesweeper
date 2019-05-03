#pragma once
#include "CompositionGraphicsDevice.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionGraphicsDevice : CompositionGraphicsDeviceT<CompositionGraphicsDevice, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionGraphicsDevice() = default;

        FastWindows::UI::Composition::CompositionDrawingSurface CreateDrawingSurface(Windows::Foundation::Size const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode);
        winrt::event_token RenderingDeviceReplaced(Windows::Foundation::TypedEventHandler<FastWindows::UI::Composition::CompositionGraphicsDevice, FastWindows::UI::Composition::RenderingDeviceReplacedEventArgs> const& handler);
        void RenderingDeviceReplaced(winrt::event_token const& token) noexcept;
        FastWindows::UI::Composition::CompositionDrawingSurface CreateDrawingSurface2(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode);
        FastWindows::UI::Composition::CompositionVirtualDrawingSurface CreateVirtualDrawingSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode);
        FastWindows::UI::Composition::CompositionMipmapSurface CreateMipmapSurface(Windows::Graphics::SizeInt32 const& sizePixels, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, Windows::Graphics::DirectX::DirectXAlphaMode const& alphaMode);
        void Trim();
    };
}
