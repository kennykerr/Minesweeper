#include "pch.h"
#include "CompositionCommitBatch.h"
#include "CompositionCommitBatch.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    bool CompositionCommitBatch::IsActive()
    {
        throw hresult_not_implemented();
    }
    bool CompositionCommitBatch::IsEnded()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CompositionCommitBatch::Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, FastWindows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void CompositionCommitBatch::Completed(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
