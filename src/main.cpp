#include <raylib.h>

int main()
{
    Color darkGreen = Color{20, 160, 133, 255};

    const int screenWidth = 300;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Tetris com Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(darkGreen);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}