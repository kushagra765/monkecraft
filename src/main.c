#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Monkecraft");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Welcome to Monkecraft!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
