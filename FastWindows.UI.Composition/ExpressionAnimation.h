#pragma once
#include "ExpressionAnimation.g.h"
#include "CompositionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ExpressionAnimation : ExpressionAnimationT<ExpressionAnimation, FastWindows::UI::Composition::implementation::CompositionAnimation>
    {
        ExpressionAnimation() = default;

        hstring Expression();
        void Expression(hstring value);
    };
}
