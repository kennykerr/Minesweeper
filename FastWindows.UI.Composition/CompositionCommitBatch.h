#pragma once
#include "CompositionCommitBatch.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionCommitBatch : CompositionCommitBatchT<CompositionCommitBatch, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionCommitBatch() = default;

        bool IsActive();
        bool IsEnded();
        winrt::event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, FastWindows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler);
        void Completed(winrt::event_token const& token) noexcept;
    };
}
