#include <raylib.h>

int main(void)
{
    InitWindow(800, 450, "Monkecraft");

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BROWN);
            DrawText("Welcome to Monkecraft!", 190, 200, 20, GREEN);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
