#pragma once
#include "AnimationController.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct AnimationController : AnimationControllerT<AnimationController, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        AnimationController() = default;

        static float MaxPlaybackRate();
        static float MinPlaybackRate();
        float PlaybackRate();
        void PlaybackRate(float value);
        float Progress();
        void Progress(float value);
        Windows::UI::Composition::AnimationControllerProgressBehavior ProgressBehavior();
        void ProgressBehavior(Windows::UI::Composition::AnimationControllerProgressBehavior value);
        void Pause();
        void Resume();
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct AnimationController : AnimationControllerT<AnimationController, implementation::AnimationController>
    {
    };
}
