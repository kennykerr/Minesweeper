#include "pch.h"
#include "Minesweeper.h"

using namespace winrt;
using namespace std::literals;

using namespace Windows::ApplicationModel::Core;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Numerics;
using namespace Windows::UI::Core;
using namespace FastWindows::UI::Composition;
using namespace Windows::System;
using namespace Windows::UI;
using namespace Windows::Graphics::Display;
using namespace Windows::Foundation::Metadata;

struct App : implements<App, IFrameworkViewSource, IFrameworkView>
{
    IFrameworkView CreateView()
    {
        return *this;
    }

    void Initialize(CoreApplicationView const& view)
    {
        m_view = view;
    }

    void Load(hstring const&)
    {
    }

    void Uninitialize()
    {
        m_sizeChanged.revoke();
        m_pointerMoved.revoke();
        m_pointerPressed.revoke();
    }

    void Run()
    {
        m_compositor = Compositor();
        m_windowRoot = m_compositor.CreateContainerVisual();
        m_windowRoot.RelativeSizeAdjustment({ 1.0f, 1.0f });
        m_target = m_compositor.CreateTargetForCurrentView();
        m_target.Root(m_windowRoot);

        m_minesweeper = std::make_unique<Minesweeper>(m_windowRoot, GetWindowSize());

        m_sizeChanged = m_window.SizeChanged(auto_revoke, { this, &App::OnSizeChanged });
        m_pointerMoved = m_window.PointerMoved(auto_revoke, { this, &App::OnPointerMoved });
        m_pointerPressed = m_window.PointerPressed(auto_revoke, { this, &App::OnPointerPressed });

        m_window.Activate();

        CoreDispatcher dispatcher = m_window.Dispatcher();
        dispatcher.ProcessEvents(CoreProcessEventsOption::ProcessUntilQuit);
    }

    void SetWindow(CoreWindow const& window)
    {
        m_window = window;
    }

    void OnSizeChanged(CoreWindow const&, WindowSizeChangedEventArgs const& args)
    {
        auto windowSize = float2(args.Size());
        m_minesweeper->OnParentSizeChanged(windowSize);
    }

    float2 GetWindowSize()
    {
        return { m_window.Bounds().Width, m_window.Bounds().Height };
    }

    void OnPointerMoved(IInspectable const&, PointerEventArgs const& args)
    {
        float2 point = args.CurrentPoint().Position();
        m_minesweeper->OnPointerMoved(point);
    }

    void OnPointerPressed(IInspectable const&, PointerEventArgs const& args)
    {
        m_minesweeper->OnPointerPressed(
            args.CurrentPoint().Properties().IsRightButtonPressed(),
            args.CurrentPoint().Properties().IsEraser());
    }

    CoreApplicationView m_view{ nullptr };
    CoreWindow m_window{ nullptr };

    Compositor m_compositor{ nullptr };
    CompositionTarget m_target{ nullptr };
    ContainerVisual m_windowRoot{ nullptr };

    std::unique_ptr<Minesweeper> m_minesweeper{ nullptr };

    CoreWindow::SizeChanged_revoker m_sizeChanged;
    CoreWindow::PointerMoved_revoker m_pointerMoved;
    CoreWindow::PointerPressed_revoker m_pointerPressed;
};

#if defined(WINRT_DIAGNOSTICS)
fire_and_forget DiagnosticsAsync()
{
    while (true)
    {
        co_await 5s;

        auto info = impl::get_diagnostics_info().detach();

        std::wstring buffer = L"==========================================\n";

        for (auto&& factory : info.factories)
        {
            buffer += L"Factory: " + factory.first + L" (" + std::to_wstring(factory.second.requests) + L") ";

            if (!factory.second.is_agile)
            {
                buffer += L"non-agile factory - BAD";
            }

            buffer += L'\n';
        }

        buffer += L"------------------------------------------\n";

        for (auto&& query : info.queries)
        {
            buffer += L"Query: " + query.first + L" (" + std::to_wstring(query.second) + L")\n";
        }

        buffer += L"------------------------------------------\n\n";

        OutputDebugStringW(buffer.c_str());
    }
}
#endif

int __stdcall wWinMain(void*, void*, wchar_t*, int)
{
#if defined(WINRT_DIAGNOSTICS)
    DiagnosticsAsync();
#endif

    CoreApplication::Run(make<App>());
}
