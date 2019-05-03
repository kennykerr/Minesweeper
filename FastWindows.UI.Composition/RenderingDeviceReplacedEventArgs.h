#pragma once
#include "RenderingDeviceReplacedEventArgs.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct RenderingDeviceReplacedEventArgs : RenderingDeviceReplacedEventArgsT<RenderingDeviceReplacedEventArgs, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        RenderingDeviceReplacedEventArgs() = default;

        FastWindows::UI::Composition::CompositionGraphicsDevice GraphicsDevice();
    };
}
