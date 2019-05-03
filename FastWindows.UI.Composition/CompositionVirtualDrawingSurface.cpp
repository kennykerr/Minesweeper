#include "pch.h"
#include "CompositionVirtualDrawingSurface.h"
#include "CompositionVirtualDrawingSurface.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    void CompositionVirtualDrawingSurface::Trim(array_view<Windows::Graphics::RectInt32 const> rects)
    {
        throw hresult_not_implemented();
    }
}
