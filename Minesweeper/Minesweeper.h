#pragma once

enum  MineState
{
    Empty = 0,
    Flag = 1,
    Question = 2,

    Last = 3
};

class Minesweeper
{
public:
    Minesweeper(
        winrt::FastWindows::UI::Composition::ContainerVisual const& parentVisual,
        winrt::Windows::Foundation::Numerics::float2 parentSize);
    ~Minesweeper() {}

    void OnPointerMoved(winrt::Windows::Foundation::Numerics::float2 point);
    void OnParentSizeChanged(winrt::Windows::Foundation::Numerics::float2 newSize);
    void OnPointerPressed(
        bool isRightButton,
        bool isEraser);

private:
    void NewGame(int boardWidth, int boardHeight, int mines);
    float ComputeScaleFactor(winrt::Windows::Foundation::Numerics::float2 windowSize);
    float ComputeScaleFactor();
    void UpdateBoardScale(winrt::Windows::Foundation::Numerics::float2 windowSize);
    bool Sweep(int x, int y);
    void Reveal(int index);
    bool IsInBoundsAndUnmarked(int x, int y);
    void PushIfUnmarked(std::queue<int>& sweeps, int x, int y);
    winrt::FastWindows::UI::Composition::CompositionColorBrush GetColorBrushFromMineState(MineState state);
    winrt::FastWindows::UI::Composition::CompositionColorBrush GetColorBrushFromMineCount(int count);
    void GenerateMines(int numMines);
    int GenerateIndex(int min, int max);
    int ComputeIndex(int x, int y);
    int ComputeXFromIndex(int index);
    int ComputeYFromIndex(int index);
    bool IsInBounds(int x, int y);
    bool TestSpot(int x, int y);
    int GetSurroundingMineCount(int x, int y);

private:
    winrt::FastWindows::UI::Composition::Compositor m_compositor{ nullptr };
    winrt::FastWindows::UI::Composition::SpriteVisual m_root{ nullptr };

    winrt::FastWindows::UI::Composition::ContainerVisual m_gameBoard{ nullptr };
    std::vector<winrt::FastWindows::UI::Composition::SpriteVisual> m_tiles;
    winrt::FastWindows::UI::Composition::SpriteVisual m_selectionVisual{ nullptr };

    int m_gameBoardWidth;
    int m_gameBoardHeight;
    winrt::Windows::Foundation::Numerics::float2 m_tileSize;
    winrt::Windows::Foundation::Numerics::float2 m_margin;
    winrt::Windows::Foundation::Numerics::float2 m_gameBoardMargin;
    int m_currentSelectionX;
    int m_currentSelectionY;
    std::vector<MineState> m_mineStates;
    std::vector<bool> m_mines;
    std::vector<int> m_neighborCounts;
    winrt::Windows::Foundation::Numerics::float2 m_parentSize;
};