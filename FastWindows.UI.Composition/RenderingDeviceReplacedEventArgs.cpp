#include "pch.h"
#include "RenderingDeviceReplacedEventArgs.h"
#include "RenderingDeviceReplacedEventArgs.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionGraphicsDevice RenderingDeviceReplacedEventArgs::GraphicsDevice()
    {
        throw hresult_not_implemented();
    }
}
