#pragma once
#include "CompositionScopedBatch.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionScopedBatch : CompositionScopedBatchT<CompositionScopedBatch, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionScopedBatch() = default;

        bool IsActive();
        bool IsEnded();
        void End();
        void Resume();
        void Suspend();
        winrt::event_token Completed(Windows::Foundation::TypedEventHandler<Windows::Foundation::IInspectable, FastWindows::UI::Composition::CompositionBatchCompletedEventArgs> const& handler);
        void Completed(winrt::event_token const& token) noexcept;
    };
}
