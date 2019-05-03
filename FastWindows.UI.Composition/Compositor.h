#pragma once
#include "Compositor.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Compositor : CompositorT<Compositor>
    {
        Compositor() = default;

        static float MaxGlobalPlaybackRate();
        static float MinGlobalPlaybackRate();
        FastWindows::UI::Composition::ColorKeyFrameAnimation CreateColorKeyFrameAnimation();
        FastWindows::UI::Composition::CompositionColorBrush CreateColorBrush();
        FastWindows::UI::Composition::CompositionColorBrush CreateColorBrush(Windows::UI::Color const& color);
        FastWindows::UI::Composition::ContainerVisual CreateContainerVisual();
        FastWindows::UI::Composition::CubicBezierEasingFunction CreateCubicBezierEasingFunction(Windows::Foundation::Numerics::float2 const& controlPoint1, Windows::Foundation::Numerics::float2 const& controlPoint2);
        FastWindows::UI::Composition::CompositionEffectFactory CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect);
        FastWindows::UI::Composition::CompositionEffectFactory CreateEffectFactory(Windows::Graphics::Effects::IGraphicsEffect const& graphicsEffect, Windows::Foundation::Collections::IIterable<hstring> const& animatableProperties);
        FastWindows::UI::Composition::ExpressionAnimation CreateExpressionAnimation();
        FastWindows::UI::Composition::ExpressionAnimation CreateExpressionAnimation(hstring const& expression);
        FastWindows::UI::Composition::InsetClip CreateInsetClip();
        FastWindows::UI::Composition::InsetClip CreateInsetClip(float leftInset, float topInset, float rightInset, float bottomInset);
        FastWindows::UI::Composition::LinearEasingFunction CreateLinearEasingFunction();
        FastWindows::UI::Composition::CompositionPropertySet CreatePropertySet();
        FastWindows::UI::Composition::QuaternionKeyFrameAnimation CreateQuaternionKeyFrameAnimation();
        FastWindows::UI::Composition::ScalarKeyFrameAnimation CreateScalarKeyFrameAnimation();
        FastWindows::UI::Composition::CompositionScopedBatch CreateScopedBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType);
        FastWindows::UI::Composition::SpriteVisual CreateSpriteVisual();
        FastWindows::UI::Composition::CompositionSurfaceBrush CreateSurfaceBrush();
        FastWindows::UI::Composition::CompositionSurfaceBrush CreateSurfaceBrush(FastWindows::UI::Composition::ICompositionSurface const& surface);
        FastWindows::UI::Composition::CompositionTarget CreateTargetForCurrentView();
        FastWindows::UI::Composition::Vector2KeyFrameAnimation CreateVector2KeyFrameAnimation();
        FastWindows::UI::Composition::Vector3KeyFrameAnimation CreateVector3KeyFrameAnimation();
        FastWindows::UI::Composition::Vector4KeyFrameAnimation CreateVector4KeyFrameAnimation();
        FastWindows::UI::Composition::CompositionCommitBatch GetCommitBatch(Windows::UI::Composition::CompositionBatchTypes const& batchType);
        void Close();
        FastWindows::UI::Composition::AmbientLight CreateAmbientLight();
        FastWindows::UI::Composition::CompositionAnimationGroup CreateAnimationGroup();
        FastWindows::UI::Composition::CompositionBackdropBrush CreateBackdropBrush();
        FastWindows::UI::Composition::DistantLight CreateDistantLight();
        FastWindows::UI::Composition::DropShadow CreateDropShadow();
        FastWindows::UI::Composition::ImplicitAnimationCollection CreateImplicitAnimationCollection();
        FastWindows::UI::Composition::LayerVisual CreateLayerVisual();
        FastWindows::UI::Composition::CompositionMaskBrush CreateMaskBrush();
        FastWindows::UI::Composition::CompositionNineGridBrush CreateNineGridBrush();
        FastWindows::UI::Composition::PointLight CreatePointLight();
        FastWindows::UI::Composition::SpotLight CreateSpotLight();
        FastWindows::UI::Composition::StepEasingFunction CreateStepEasingFunction();
        FastWindows::UI::Composition::StepEasingFunction CreateStepEasingFunction(int32_t stepCount);
        FastWindows::UI::Composition::CompositionBackdropBrush CreateHostBackdropBrush();
        FastWindows::UI::Composition::CompositionColorGradientStop CreateColorGradientStop();
        FastWindows::UI::Composition::CompositionColorGradientStop CreateColorGradientStop(float offset, Windows::UI::Color const& color);
        FastWindows::UI::Composition::CompositionLinearGradientBrush CreateLinearGradientBrush();
        FastWindows::UI::Composition::SpringScalarNaturalMotionAnimation CreateSpringScalarAnimation();
        FastWindows::UI::Composition::SpringVector2NaturalMotionAnimation CreateSpringVector2Animation();
        FastWindows::UI::Composition::SpringVector3NaturalMotionAnimation CreateSpringVector3Animation();
        hstring Comment();
        void Comment(hstring value);
        float GlobalPlaybackRate();
        void GlobalPlaybackRate(float value);
        FastWindows::UI::Composition::BounceScalarNaturalMotionAnimation CreateBounceScalarAnimation();
        FastWindows::UI::Composition::BounceVector2NaturalMotionAnimation CreateBounceVector2Animation();
        FastWindows::UI::Composition::BounceVector3NaturalMotionAnimation CreateBounceVector3Animation();
        FastWindows::UI::Composition::CompositionContainerShape CreateContainerShape();
        FastWindows::UI::Composition::CompositionEllipseGeometry CreateEllipseGeometry();
        FastWindows::UI::Composition::CompositionLineGeometry CreateLineGeometry();
        FastWindows::UI::Composition::CompositionPathGeometry CreatePathGeometry();
        FastWindows::UI::Composition::CompositionPathGeometry CreatePathGeometry(FastWindows::UI::Composition::CompositionPath const& path);
        FastWindows::UI::Composition::PathKeyFrameAnimation CreatePathKeyFrameAnimation();
        FastWindows::UI::Composition::CompositionRectangleGeometry CreateRectangleGeometry();
        FastWindows::UI::Composition::CompositionRoundedRectangleGeometry CreateRoundedRectangleGeometry();
        FastWindows::UI::Composition::ShapeVisual CreateShapeVisual();
        FastWindows::UI::Composition::CompositionSpriteShape CreateSpriteShape();
        FastWindows::UI::Composition::CompositionSpriteShape CreateSpriteShape(FastWindows::UI::Composition::CompositionGeometry const& geometry);
        FastWindows::UI::Composition::CompositionViewBox CreateViewBox();
        Windows::Foundation::IAsyncAction RequestCommitAsync();
        FastWindows::UI::Composition::CompositionGeometricClip CreateGeometricClip();
        FastWindows::UI::Composition::CompositionGeometricClip CreateGeometricClip(FastWindows::UI::Composition::CompositionGeometry const& geometry);
        FastWindows::UI::Composition::RedirectVisual CreateRedirectVisual();
        FastWindows::UI::Composition::RedirectVisual CreateRedirectVisual(FastWindows::UI::Composition::Visual const& source);
        FastWindows::UI::Composition::BooleanKeyFrameAnimation CreateBooleanKeyFrameAnimation();
        FastWindows::UI::Composition::CompositionProjectedShadowCaster CreateProjectedShadowCaster();
        FastWindows::UI::Composition::CompositionProjectedShadow CreateProjectedShadow();
        FastWindows::UI::Composition::CompositionProjectedShadowReceiver CreateProjectedShadowReceiver();
        FastWindows::UI::Composition::CompositionRadialGradientBrush CreateRadialGradientBrush();
        FastWindows::UI::Composition::CompositionVisualSurface CreateVisualSurface();
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct Compositor : CompositorT<Compositor, implementation::Compositor>
    {
    };
}
