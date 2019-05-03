#include "pch.h"
#include "CompositionScopedBatch.h"
#include "CompositionScopedBatch.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    bool CompositionScopedBatch::IsActive()
    {
        throw hresult_not_implemented();
    }
    bool CompositionScopedBatch::IsEnded()
    {
        throw hresult_not_implemented();
    }
    void CompositionScopedBatch::End()
    {
        throw hresult_not_implemented();
    }
    void CompositionScopedBatch::Resume()
    {
        throw hresult_not_implemented();
    }
    void CompositionScopedBatch::Suspend()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CompositionScopedBatch::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, FastWindows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void CompositionScopedBatch::Completed(winrt::event_token const& token) noexcept
    {
    }
}
