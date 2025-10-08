//
// Created by Adriano on 10/7/25.
//
#include "raylib.h"

int main() {
    const int cellSize = 24;
    const int cols = 24;
    const int rows = 18;
    const int screenWidth  = cols * cellSize;
    const int screenHeight = rows * cellSize;

    InitWindow(screenWidth, screenHeight, "Snake - Day 1");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground((Color){ 18, 18, 18, 255 });
        for (int x = 0; x <= screenWidth; x += cellSize) DrawLine(x, 0, x, screenHeight, (Color){40,40,40,255});
        for (int y = 0; y <= screenHeight; y += cellSize) DrawLine(0, y, screenWidth, y, (Color){40,40,40,255});
        DrawFPS(10, 10);
        DrawText("Hello, Snake!", 10, 40, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
