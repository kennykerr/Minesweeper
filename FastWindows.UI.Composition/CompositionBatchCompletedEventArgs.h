#pragma once
#include "CompositionBatchCompletedEventArgs.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionBatchCompletedEventArgs : CompositionBatchCompletedEventArgsT<CompositionBatchCompletedEventArgs, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionBatchCompletedEventArgs() = default;

    };
}
