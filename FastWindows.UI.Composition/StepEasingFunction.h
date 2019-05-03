#pragma once
#include "StepEasingFunction.g.h"
#include "CompositionEasingFunction.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct StepEasingFunction : StepEasingFunctionT<StepEasingFunction, FastWindows::UI::Composition::implementation::CompositionEasingFunction>
    {
        StepEasingFunction() = default;

        int32_t FinalStep();
        void FinalStep(int32_t value);
        int32_t InitialStep();
        void InitialStep(int32_t value);
        bool IsFinalStepSingleFrame();
        void IsFinalStepSingleFrame(bool value);
        bool IsInitialStepSingleFrame();
        void IsInitialStepSingleFrame(bool value);
        int32_t StepCount();
        void StepCount(int32_t value);
    };
}
