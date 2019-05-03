#include "pch.h"
#include "RedirectVisual.h"
#include "RedirectVisual.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::Visual RedirectVisual::Source()
    {
        throw hresult_not_implemented();
    }
    void RedirectVisual::Source(FastWindows::UI::Composition::Visual value)
    {
        throw hresult_not_implemented();
    }
}
